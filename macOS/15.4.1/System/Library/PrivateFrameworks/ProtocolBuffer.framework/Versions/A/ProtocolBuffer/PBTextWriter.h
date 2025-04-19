@class NSMutableString, NSMutableDictionary;

@interface PBTextWriter : NSObject {
    BOOL _newlinesPrinted;
    long long _indent;
    NSMutableString *_dest;
    NSMutableDictionary *_cachedObjectTypes;
}

- (void)dealloc;
- (id)init;
- (id)string;
- (void)reset;
- (BOOL)write:(id)a0;

@end
