@interface CSFModelConfigDecoder : NSObject

+ (id)decodeJsonFromFile:(id)a0;
+ (id)getAftmCheckerConfigFromConfigDict:(id)a0;
+ (id)getAftmRecognizerRelativeConfigFromConfigDict:(id)a0;
+ (id)getNCModelFileFromConfigDict:(id)a0 resourcePath:(id)a1;
+ (id)getOdldModelFileFromConfigDict:(id)a0 resourcePath:(id)a1;
+ (id)getOdldValueForKey:(id)a0 categoryKey:(id)a1 configDict:(id)a2;

@end
