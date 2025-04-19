@class NSSet;

@interface VisualIntelligence.EncryptedSearchLTRInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ x_1;
    void /* unknown type, empty encoding */ domain_tag;
    void /* unknown type, empty encoding */ mask;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
