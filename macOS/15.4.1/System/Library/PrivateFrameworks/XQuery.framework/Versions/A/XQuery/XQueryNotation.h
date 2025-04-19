@class NSString;

@interface XQueryNotation : NSObject <XQueryAtomicType> {
    NSString *_string;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)notationWithString:(id)a0;

- (void)dealloc;
- (void)finalize;
- (BOOL)isEqual:(id)a0;
- (id)XQueryStringValue;
- (id)XQueryCastAs:(long long)a0 forContext:(id)a1;
- (long long)XQueryTypeID;

@end
