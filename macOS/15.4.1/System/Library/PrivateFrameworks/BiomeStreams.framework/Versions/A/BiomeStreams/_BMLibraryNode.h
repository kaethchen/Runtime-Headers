@interface _BMLibraryNode : NSObject

+ (id)identifier;
+ (id)allStreams;
+ (id)streams;
+ (id)streamWithIdentifier:(id)a0 error:(id *)a1;
+ (id)validKeyPaths;
+ (id)streamWithName:(id)a0;
+ (id)allStreamIdentifiers;
+ (id)allValidEventClasses;
+ (id)allValidKeyPaths;
+ (id)streamNames;
+ (id)sublibraries;

@end
