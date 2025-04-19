@class NSString, NSArray, NSMutableSet, NSNumber;

@interface KHThemePreviewInfo : NSObject <KHThemePreviewInfoProtocol>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *themePreviewIdentifier;
@property (retain, nonatomic) NSString *themeIdentifier;
@property (retain, nonatomic) NSMutableSet *keywords;
@property (retain, nonatomic) NSMutableSet *languages;
@property (retain, nonatomic) NSArray *productCodes;
@property (retain, nonatomic) NSNumber *catalogVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoKey;

- (void).cxx_destruct;
- (id)initFromDictionary:(id)a0;

@end
