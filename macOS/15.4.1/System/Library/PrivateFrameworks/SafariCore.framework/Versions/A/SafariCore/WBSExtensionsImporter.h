@class NSError, NSMutableArray, NSString;
@protocol WBSExtensionsImporterDelegate;

@interface WBSExtensionsImporter : NSObject <WBSJSONReaderDelegate> {
    NSError *_lastError;
    NSMutableArray *_stack;
    BOOL _foundExtensionsArray;
    NSString *_composedIdentifier;
    NSString *_developerName;
    NSString *_displayName;
    NSString *_adamIdentifier;
    NSString *_alternatePlatformAppBundleIdentifier;
    NSString *_alternatePlatformExtensionBundleIdentifier;
}

@property (weak, nonatomic) id<WBSExtensionsImporterDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)_checkNotAtRootLevel;
- (BOOL)_isParsingExtension;
- (BOOL)_isParsingExtensionsArray;
- (id)_popKeyFromStackIfPossible;
- (BOOL)jsonReader:(id)a0 appendKey:(id)a1;
- (BOOL)jsonReader:(id)a0 error:(id)a1;
- (BOOL)jsonReader:(id)a0 scalarValue:(id)a1;
- (BOOL)jsonReaderBeginArray:(id)a0;
- (BOOL)jsonReaderBeginObject:(id)a0;
- (BOOL)jsonReaderEndArray:(id)a0;
- (BOOL)jsonReaderEndObject:(id)a0;
- (void)parseFileHandle:(id)a0 completionHandler:(id /* block */)a1;
- (void)parseURL:(id)a0 completionHandler:(id /* block */)a1;

@end
