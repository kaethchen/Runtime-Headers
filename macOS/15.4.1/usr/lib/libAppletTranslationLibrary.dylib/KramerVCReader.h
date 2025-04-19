@interface KramerVCReader : NSObject

+ (id)decodeVGHeader:(id)a0;
+ (id)readVGFromVC:(id)a0 withStorageFile:(unsigned char)a1 withTyp:(unsigned char)a2 withSectorChain:(id)a3 withError:(id *)a4;
+ (id)decodeCyclicLogEntry:(id)a0 withRecordIndex:(unsigned char)a1;
+ (id)decodeDirectory:(id)a0;
+ (id)decodeIPEHeader:(id)a0;
+ (id)decodeIPETyp16:(id)a0 withIfr:(id)a1 withBitmap:(id)a2;
+ (id)decodeIPETyp22:(id)a0 withIfr:(id)a1 withBitmap:(id)a2;
+ (id)decodeIPETyp22Ifr2:(id)a0 withIfr:(id)a1 withBitmap:(id)a2;
+ (id)decodeIPETyp23:(id)a0 withIfr:(id)a1 withBitmap:(id)a2;
+ (id)decodeIPETyp23Ifr2:(id)a0 withIfr:(id)a1 withBitmap:(id)a2;
+ (id)decodeIPETyp2:(id)a0 withIfr:(id)a1 withBitmap:(id)a2;
+ (id)decodeTransientTicketIfr1:(id)a0 withIfr:(id)a1 withBitmap:(id)a2 withRecordOffset:(id)a3;
+ (id)decodeTransientTicketIfr2:(id)a0 withIfr:(id)a1 withBitmap:(id)a2 withRecordOffset:(id)a3;
+ (id)decodeTransientTicketIfr3:(id)a0 withIfr:(id)a1 withBitmap:(id)a2 withRecordOffset:(id)a3;
+ (id)decodeTransientTicketIfr4:(id)a0 withIfr:(id)a1 withBitmap:(id)a2 withRecordOffset:(id)a3;
+ (id)decodeVGTyp22:(id)a0 withIfr:(id)a1 withBitmap:(id)a2 withNumRecords:(id)a3;
+ (id)decodeVGTyp23:(id)a0 withIfr:(id)a1 withBitmap:(id)a2 withNumRecords:(id)a3;
+ (id)decodeVGTyp2:(id)a0 withIfr:(id)a1 withBitmap:(id)a2 withNumRecords:(id)a3;
+ (id)deriveWalletData:(id)a0 withSector:(unsigned char)a1 withValueGroup:(id)a2;
+ (id)getBestExpiry:(id)a0 withLatestValueGroup:(id)a1;
+ (id)getCommutePlanIdentifier:(id)a0;
+ (id)getCommutePlanIdentifier:(id)a0 withTyp:(id)a1 withPtyp:(id)a2 withCpicc:(id)a3 withPassDuration:(id)a4 withPromotionCode:(id)a5 withConcessionaryClass:(id)a6 withEntitlementCode:(id)a7 withRouteCode:(id)a8 withValidAtOrFrom:(id)a9 withValidTo:(id)a10;
+ (id)getCommutePlanUniqueId:(id)a0 withSector:(id)a1;
+ (id)getIPELabelDetails:(id)a0 withError:(id *)a1;
+ (id)getLatestValueGroup:(id)a0;
+ (id)getLogDirectoryEntry:(id)a0;
+ (id)processSectorChain:(id)a0 forIPE:(unsigned char)a1;
+ (id)readCardFromVC:(id)a0 forCity:(id)a1 withError:(id *)a2;
+ (id)readCyclicLogFromVC:(id)a0 forCity:(id)a1 withError:(id *)a2;
+ (id)readIPEFromVC:(id)a0 withStorageFile:(unsigned char)a1 withTyp:(unsigned char)a2 withSectorChain:(id)a3 withDirectoryDetails:(id)a4 withError:(id *)a5;

@end
