int bitGet(int bit, int puerto)
{
int bitstate;
	switch (puerto)
 {
	case 'a':
		 switch(bit)
		 {
			case 0:
				bitstate = (registro.ab.a.bitrega.b0);
				break;
			case 1:
				bitstate = (registro.ab.a.bitrega.b1);
				break;
			case 2:
				bitstate = (registro.ab.a.bitrega.b2);
				break;
			case 3:
				bitstate = (registro.ab.a.bitrega.b3);
				break;
			case 4:
				bitstate = (registro.ab.a.bitrega.b4);
				break;
			case 5:
				bitstate = (registro.ab.a.bitrega.b5);
				break;
			case 6:
				bitstate = (registro.ab.a.bitrega.b6);
				break;
			case 7:
				bitstate = (registro.ab.a.bitrega.b7);
				break;
		 }//fin switch(bit) en puerto a
	break;

	case 'b':
		switch(bit)
		 {
			case 0:
				bitstate = (registro.ab.b.bitregb.b0);
				break;
			case 1:
				bitstate = (registro.ab.b.bitregb.b1);
				break;
			case 2:
				bitstate = (registro.ab.b.bitregb.b2);
				break;
			case 3:
				bitstate = (registro.ab.b.bitregb.b3);
				break;
			case 4:
				bitstate = (registro.ab.b.bitregb.b4);
				break;
			case 5:
				bitstate = (registro.ab.b.bitregb.b5);
				break;
			case 6:
				bitstate = (registro.ab.b.bitregb.b6);
				break;
			case 7:
				bitstate = (registro.ab.b.bitregb.b7);
				break;
		 }//fin switch(bit) en puerto b
	break;

	case 'd':
		switch(bit)
		 {
			case 0:
				bitstate = (registro.bitregd.bd0);
				break;
			case 1:
				bitstate = (registro.bitregd.bd1);
				break;
			case 2:
				bitstate = (registro.bitregd.bd2);
				break;
			case 3:
				bitstate = (registro.bitregd.bd3);
				break;
			case 4:
				bitstate = (registro.bitregd.bd4);
				break;
			case 5:
				bitstate = (registro.bitregd.bd5);
				break;
			case 6:
				bitstate = (registro.bitregd.bd6);
				break;
			case 7:
				bitstate = (registro.bitregd.bd7);
				break;
			case 8:
				bitstate = (registro.bitregd.bd8);
				break;
			case 9:
				bitstate = (registro.bitregd.bd9);
				break;
			case 10:
				bitstate = (registro.bitregd.bd10);
				break;
			case 11:
				bitstate = (registro.bitregd.bd11);
				break;
			case 12:
				bitstate = (registro.bitregd.bd12);
				break;
			case 13:
				bitstate = (registro.bitregd.bd13);
				break;
			case 14:
				bitstate = (registro.bitregd.bd14);
				break;
			case 15:
				bitstate = (registro.bitregd.bd15);
				break;
		 }//fin switch(bit) en puerto d
	break;
 }//fin switch(puerto)
return bitstate;
}

