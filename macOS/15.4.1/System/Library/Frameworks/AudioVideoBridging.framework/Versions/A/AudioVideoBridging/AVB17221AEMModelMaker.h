@class NSString, NSMutableArray, AVB17221AEMStrings;

@interface AVB17221AEMModelMaker : NSObject {
    NSMutableArray *_stringsArray;
    AVB17221AEMStrings *_strings;
}

@property (nonatomic) unsigned char stringsIndex;
@property (nonatomic) unsigned short stringsOffset;
@property (copy, nonatomic) NSString *vendorName;
@property (copy, nonatomic) NSString *modelName;

- (id)init;
- (void).cxx_destruct;
- (id)locale;
- (id)entity;
- (id)addLocalizedString:(id)a0;
- (id)stringWithLocalizedDescription:(id)a0;
- (void)addVendorAndModelToStrings;
- (id)localeWithIdentitfier:(id)a0;
- (id)memoryObjectWithAppleLogo;
- (id)memoryObjectWithData:(id)a0;
- (id)memoryObjectWithDeviceLogo;
- (id)memoryObjectWithImage:(id)a0;
- (void)resetLocalizedStrings;
- (id)systemModelID;

@end
