@class NSURL, NSDictionary;

@interface WebAppUtilities : NSObject

@property (class, readonly, nonatomic) NSURL *documentsStateURL;
@property (class, readonly, nonatomic) NSDictionary *persistedDocumentsState;

+ (void)presentCustomIconPickerWithCompletionHandler:(id /* block */)a0;

@end
