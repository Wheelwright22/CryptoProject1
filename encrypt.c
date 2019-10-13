//@author Nour Daoud

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

//initialize to -1 because we don't want 0 to be considered taken.
int taken_values[106] = {[0 ... 105] = -1 };

int taken_values_count = 0;

bool arrayContainsValue(int val) {
	for (int i = 0; i < 106 ; i++) {
		if (taken_values[i] == val)
			return true;
	}
	return false;

}

int* getRandomArray(int* buf, int length){

	for (int i = 0; i < length ; i++)
	{
		do {
			buf[i] = rand() % 106 ;
		}
		while (arrayContainsValue(buf[i])); 
		taken_values[taken_values_count] = buf[i];
		taken_values_count++;
	}
	
	return buf;

}

int* encryptString (char* plain_text, int* charToKeys[27], int plaintext_length, int* key_lengths){

	int cipher[plaintext_length];
//	printf("array length is %d", plaintext_length);
	for (int i=0 ; i < plaintext_length ; i++){
		int char_index = -1;
		int ascii_value = (int)plain_text[i];
		(ascii_value == 32) ? (char_index = 0) : (char_index = ascii_value - 96);
	
		int *curr_array = charToKeys[char_index];	
		//printf("index of %c is %d ", plain_text[i], char_index); 		
		cipher[i] = curr_array[i % key_lengths[char_index]];		
	
	}

	printf("\n");
	for (int i = 0 ; i < plaintext_length ; i++) {
		printf("%d,", cipher[i]);
	}
	

}

int main(int argc, char const *argv[]){



	char plain_text_1[] = "masterwork swept squanders grounders idolatries swapper pave croupier dramatists magnified hypnoses delivery tassels marquise entailments circuits crampon nationalism nictitation anticapitalists dancingly soothly patriarchs goodie whickers baggy omnipotent sadist ameba processions beggary rename nonassertively macerators lectureship shipwrights sadden backups rhymer offstage schistose ebbs restorer graecizes subjoining leathering smocks leukocyte waled temperer embroglios bolivar repines teletyp";

	char plain_text_2[] = "wharves locoisms tearjerkers remiss chops duties prolonged inequities minnows itemized thematically scorecard deliverers jokingly semiosis claspers brazenness grateful collarbones stamping bittersweets habilitation endorsers decrepitly tambourine shadowboxes adopting ingenuous disquisitions quietist innovates mingles nationals disparaging exults realtor cockade rubberizing tubercled unremitting sloppiest algin knuckleball disengage domes doltishly encyclics spectroscopically debauched circumsola";

	char plain_text_3[] = "ozonise creosotes disruption neighborly lunier shagging balancing adriatic dick guesstimate storminess jest soberer spun toolbox crochet firebreak parliamentary undismayed lintiest homoeroticism silverfishes cornstalk digest subtler ruck cairns wombat working synapsed diamonding association opalescence crenation bumblebees undetected sandwiching unpeoples polishes schoolwork familarity flaying slued soothers splenification dare hydrology gourami alligators varsity statuettes gainly feeding filme";

	char plain_text_4[] = "autarky sartor terbium synapse herr eugenicists isthmian reembarks spinet dictaphone ecology carinae coeducational carburizing undulated twopenny subscriptions wrigglier scaliness enthrallingly carvers russified rejoice anaconda switzerland sallows devotedly pledgees incongruous miriest nonextraditable extrospection clipping souffle mimicry interrupts reputably reteaches quicksets bankroll hallucinated unzealous invocation winless yacking shinbone tonal vasoconstrictive manioc gourami purling ey";

	char plain_text_5[] = "championships iatrogenic maniacally antonym schoolboy shyly leafhoppers inturned sunbathing overrefined obliterations discus maintain cranked uniters twangled impairer wreakers forewings silesia occupance headroom foresting ornithologists shims lackaday benumbedness gloomy sententious fussing flagrant consonance profligately scutcheons honda swooned headworks zeins intermezzo adaptions elbow ocotillos denim japers thalamic corinthians restraightening kowtowed embarrasses latissimi impoverished s";

//	printf("%s\n", plain_text_1);

//	printf("%s\n", plain_text_2);
	
//	printf("%s\n", plain_text_3);

//	printf("%s\n", plain_text_4);

//	printf("%s\n", plain_text_5);

	int space_mapping[19] = {0};
	int a_mapping[7] = {0};
	int b_mapping[1] = {0};
	int c_mapping[2] = {0};
	int d_mapping[4] = {0};
	int e_mapping[10] = {0};
	int f_mapping[2] = {0};
	int g_mapping[2] = {0};
	int h_mapping[5] = {0};
	int i_mapping[6] = {0};
	int j_mapping[1] = {0};
	int k_mapping[1] = {0};
	int l_mapping[3] = {0};
	int m_mapping[2] = {0};
	int n_mapping[6] = {0};
	int o_mapping[6] = {0};
	int p_mapping[2] = {0};
	int q_mapping[1] = {0};
	int r_mapping[5] = {0};
	int s_mapping[5] = {0};
	int t_mapping[7] = {0};
	int u_mapping[2] = {0};
	int v_mapping[1] = {0};
	int w_mapping[2] = {0};
	int x_mapping[1] = {0};
	int y_mapping[2] = {0};
	int z_mapping[1] = {0};


	int key_lengths[27]= {19, 7, 1, 2, 4, 10, 2, 2, 5, 6, 1, 1, 3, 2, 6 ,6, 2, 1, 5, 5, 7, 2, 1, 2, 1, 2, 1};

	printf("**********starting to map random keys to characters********");
	getRandomArray(space_mapping, 19);
	getRandomArray(a_mapping, 7);
	getRandomArray(b_mapping, 1);
	getRandomArray(c_mapping, 2);
	getRandomArray(d_mapping, 4);
	getRandomArray(e_mapping, 10);
	getRandomArray(f_mapping, 2);
	getRandomArray(g_mapping, 2);
	getRandomArray(h_mapping, 5);
	getRandomArray(i_mapping, 6);
	getRandomArray(j_mapping, 1);
	getRandomArray(k_mapping, 1);
	getRandomArray(l_mapping, 3);
	getRandomArray(m_mapping, 2);
	getRandomArray(n_mapping, 6);
	getRandomArray(o_mapping, 6);
	getRandomArray(p_mapping, 2);
	getRandomArray(q_mapping, 1);
	getRandomArray(r_mapping, 5);
	getRandomArray(s_mapping, 5);
	getRandomArray(t_mapping, 7);
	getRandomArray(u_mapping, 2);
	getRandomArray(v_mapping, 1);
	getRandomArray(w_mapping, 2);
	getRandomArray(x_mapping, 1);
	getRandomArray(y_mapping, 2);
	getRandomArray(z_mapping, 1);

	printf ("\n****** done mapping random keys to characters ********\n");
	
	
	//array of arrays pointing to the keys associated with each character.
	int *charToKeys[27];
	charToKeys[0] = space_mapping;
	charToKeys[1] = a_mapping;
	charToKeys[2] = b_mapping;
	charToKeys[3] = c_mapping;
	charToKeys[4] = d_mapping;
	charToKeys[5] = e_mapping;
	charToKeys[6] = f_mapping;
	charToKeys[7] = g_mapping;
	charToKeys[8] = h_mapping;
	charToKeys[9] = i_mapping;
	charToKeys[10] = j_mapping;
	charToKeys[11] = k_mapping;
	charToKeys[12] = l_mapping;
	charToKeys[13] = m_mapping;
	charToKeys[14] = n_mapping;
	charToKeys[15] = o_mapping;
	charToKeys[16] = p_mapping;
	charToKeys[17] = q_mapping;
	charToKeys[18] = r_mapping;
	charToKeys[19] = s_mapping;
	charToKeys[20] = t_mapping;
	charToKeys[21] = u_mapping;
	charToKeys[22] = v_mapping;
	charToKeys[23] = w_mapping;
	charToKeys[24] = x_mapping;
	charToKeys[25] = y_mapping;
	charToKeys[26] = z_mapping;


	for (int i = 0 ; i < 27; i++) {

		int *curr_array = charToKeys[i];
		printf("keys associated with character at index %d: ", i);
		for (int j = 0 ; j < key_lengths[i] ; j++) {
				
			printf("%d ", curr_array[j]);
		}
		printf("\n");
	}

	char plain_text[] = "aa a";
	printf("\n********cipher for plain text 1 ***************"); 
	encryptString(plain_text_1, charToKeys, 500, key_lengths);
	printf("\n********cipher for plain text 2 ***************"); 
	encryptString(plain_text_2, charToKeys, 500, key_lengths);
	printf("\n********cipher for plain text 3 ***************"); 
	encryptString(plain_text_3, charToKeys, 500, key_lengths);
	printf("\n********cipher for plain text 4 ***************"); 
	encryptString(plain_text_4, charToKeys, 500, key_lengths);
	printf("\n********cipher for plain text 5 ***************"); 
	encryptString(plain_text_5, charToKeys, 500, key_lengths);
	
	return 0;
}             

