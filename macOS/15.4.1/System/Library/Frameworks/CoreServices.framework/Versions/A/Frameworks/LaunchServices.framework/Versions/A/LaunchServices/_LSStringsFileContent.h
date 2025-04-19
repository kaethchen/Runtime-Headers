@class NSString, NSMutableDictionary, _LSLazyPropertyList;

@interface _LSStringsFileContent : NSObject {
    NSString *_stringsFile;
    NSMutableDictionary *_stringsFileContent;
    _LSLazyPropertyList *_loctable;
    struct { unsigned char hasLookedForLoctable : 1; unsigned char isInfoPlist : 1; } _flags;
}

+ (id)IOQueue;

- (id)debugDescription;
- (void).cxx_destruct;

@end
