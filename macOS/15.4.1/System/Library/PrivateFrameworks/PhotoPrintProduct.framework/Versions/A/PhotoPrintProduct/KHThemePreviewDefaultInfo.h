@class NSDictionary, NSArray, NSString;

@interface KHThemePreviewDefaultInfo : NSObject <KHThemePreviewInfoProtocol>

@property (retain, nonatomic) NSDictionary *defaultCoverLayout;
@property (retain, nonatomic) NSArray *defaultPagesTreatments;
@property (retain, nonatomic) NSDictionary *defaultMasterIdentifiersByUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoKey;

- (void).cxx_destruct;
- (id)initFromDictionary:(id)a0;

@end
