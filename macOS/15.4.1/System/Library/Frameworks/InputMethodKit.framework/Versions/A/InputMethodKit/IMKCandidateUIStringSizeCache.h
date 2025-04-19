@class NSMutableDictionary;

@interface IMKCandidateUIStringSizeCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *identifierToUIPropertiesMapping;

+ (id)sharedCache;

- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeForString:(id)a0 properties:(id)a1;

@end
