@class NSBundle;

@interface SFOidParser : NSObject {
    struct cssm_data { unsigned long long x0; char *x1; } *configData;
    NSBundle *bundle;
    long long token;
}

+ (unsigned int)DER_ToInt:(const struct cssm_data { unsigned long long x0; char *x1; } *)a0;
+ (id)printIPAddress:(const struct cssm_data { unsigned long long x0; char *x1; } *)a0;
+ (BOOL)compareOid:(const struct cssm_data { unsigned long long x0; char *x1; } *)a0 toOid:(const struct cssm_data { unsigned long long x0; char *x1; } *)a1;
+ (id)killTrailingString:(id)a0 end:(id)a1;
+ (id)printBlobBytes:(id)a0 quanta:(id)a1 bytesToPrint:(unsigned int)a2 thing:(const struct cssm_data { unsigned long long x0; char *x1; } *)a3;
+ (id)printCertTypeString:(unsigned int)a0 isRoot:(BOOL)a1;
+ (id)printDataAsHex:(const struct cssm_data { unsigned long long x0; char *x1; } *)a0 maxToPrint:(unsigned int)a1;
+ (id)printDigest:(unsigned int)a0 thingToDigest:(const struct cssm_data { unsigned long long x0; char *x1; } *)a1;
+ (id)printNumericData:(const struct cssm_data { unsigned long long x0; char *x1; } *)a0;
+ (id)printString:(const struct cssm_data { unsigned long long x0; char *x1; } *)a0 encoding:(unsigned long long)a1;
+ (id)printStringEscapingInvisibles:(id)a0;
+ (id)printStringRemovingPercentEscapes:(id)a0;
+ (id)printStringWithEncoding:(const struct cssm_data { unsigned long long x0; char *x1; } *)a0 encoding:(unsigned long long)a1;
+ (id)printTagTypeString:(unsigned char)a0;

- (void)dealloc;
- (id)init;
- (void)cleanup;
- (id)cachedObjectForKey:(id)a0;
- (id)parseOid:(const struct cssm_data { unsigned long long x0; char *x1; } *)a0;
- (id)parseOidWithDictionary:(const struct cssm_data { unsigned long long x0; char *x1; } *)a0;
- (id)printDerThing:(unsigned char)a0 thing:(const struct cssm_data { unsigned long long x0; char *x1; } *)a1;
- (id)printECDSASigAlgParams:(struct cssm_data { unsigned long long x0; char *x1; } *)a0;
- (id)printOid:(const struct cssm_data { unsigned long long x0; char *x1; } *)a0;
- (id)printOidAsDecimal:(const struct cssm_data { unsigned long long x0; char *x1; } *)a0;
- (id)printSigAlg:(struct { struct cssm_data { unsigned long long x0; char *x1; } x0; struct cssm_data { unsigned long long x0; char *x1; } x1; } *)a0;
- (id)printSigAlgParams:(struct { struct cssm_data { unsigned long long x0; char *x1; } x0; struct cssm_data { unsigned long long x0; char *x1; } x1; } *)a0;

@end
