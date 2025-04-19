@class OADSubBlip;

@interface OADBlip : NSObject {
    unsigned int mReferenceCount;
    OADSubBlip *mMainSubBlip;
    OADSubBlip *mAltSubBlip;
}

+ (id)pathExtensionForBlipType:(int)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setMainSubBlip:(id)a0;
- (id)altSubBlip;
- (id)mainSubBlip;
- (unsigned int *)referenceCount;
- (void)setAltSubBlip:(id)a0;

@end
