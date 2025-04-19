@interface DUInformationExtractor : NSObject

+ (id)supportedLanguages;
+ (id)sharedExtractor;

- (id)mockAttributes;
- (void)requestExtractionOfPersonalIDFromDocument:(id)a0 completion:(id /* block */)a1;

@end
