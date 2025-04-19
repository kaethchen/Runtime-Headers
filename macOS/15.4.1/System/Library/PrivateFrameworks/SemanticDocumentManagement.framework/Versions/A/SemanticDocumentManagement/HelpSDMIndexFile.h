@interface HelpSDMIndexFile : NSObject

+ (BOOL)createSDMIndexFileFromHelpBookBundle:(id)a0 forLanguage:(id)a1 atSDMModelPath:(id)a2;
+ (BOOL)createSDMIndexFileFromHelpIndexFile:(id)a0 bookIdentifier:(id)a1 atSDMModelPath:(id)a2 language:(id)a3;
+ (id)helpIndexFilePathInBundle:(id)a0 forLanguage:(id)a1;
+ (id)loadIndexForHelpBook:(id)a0 fromSDMModelPath:(id)a1;
+ (id)loadIndexFromIndexFile:(id)a0;

@end
