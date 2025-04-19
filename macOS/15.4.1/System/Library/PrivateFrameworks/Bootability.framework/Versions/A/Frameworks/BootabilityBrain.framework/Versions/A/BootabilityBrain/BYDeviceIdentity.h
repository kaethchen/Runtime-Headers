@class NSData, NSNumber, NSDictionary;

@interface BYDeviceIdentity : NSObject

@property struct _img4_chip_instance { unsigned short chid_version; struct _img4_chip *chid_chip_family; unsigned long long chid_omit; unsigned int chid_cepo; unsigned int chid_bord; unsigned int chid_chip; unsigned int chid_sdom; unsigned long long chid_ecid; BOOL chid_cpro; BOOL chid_csec; BOOL chid_epro; BOOL chid_esec; BOOL chid_iuou; BOOL chid_rsch; BOOL chid_euou; unsigned int chid_esdm; BOOL chid_fpgt; struct _img4_dgst { unsigned short i4d_version; unsigned long long i4d_len; unsigned char i4d_bytes[48]; } chid_udid; unsigned int chid_fchp; unsigned int chid_type; unsigned int chid_styp; unsigned int chid_clas; } chip;
@property (retain) NSData *snuf;
@property (retain) NSNumber *sikaFuse;
@property (readonly) NSDictionary *apParameters;

- (void).cxx_destruct;
- (id)initWithChip:(const struct _img4_chip { } *)a0 error:(id *)a1;

@end
