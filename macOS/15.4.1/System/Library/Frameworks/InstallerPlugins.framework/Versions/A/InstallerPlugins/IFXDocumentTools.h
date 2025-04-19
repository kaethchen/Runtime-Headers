@interface IFXDocumentTools : NSObject

+ (id)_memoryBasedAttributedStringWithFile:(id)a0;
+ (id)loadResourceData:(id)a0 forDocument:(id)a1 language:(id)a2;
+ (id)loadResourceData:(id)a0 forDocument:(id)a1 language:(id)a2 verifyFailed:(BOOL *)a3;
+ (void)printView:(id)a0 modalForWindow:(id)a1 delegate:(id)a2;
+ (BOOL)saveView:(id)a0 withDefaultFileName:(id)a1;
+ (void)saveView:(id)a0 withDefaultFileName:(id)a1 modalForWindow:(id)a2 completionHandler:(id /* block */)a3;
+ (void)standardizeTextView:(id)a0 showContextualMenu:(BOOL)a1;

@end
