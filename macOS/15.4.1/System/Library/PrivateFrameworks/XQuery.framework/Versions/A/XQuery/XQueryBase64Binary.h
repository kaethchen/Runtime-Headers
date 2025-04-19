@class NSString, NSData;

@interface XQueryBase64Binary : NSObject <XQueryAtomicType> {
    NSData *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)binaryWithData:(id)a0;
+ (id)binaryWithString:(id)a0;

- (void)dealloc;
- (void)finalize;
- (BOOL)isEqual:(id)a0;
- (id)data;
- (id)initWithData:(id)a0;
- (id)stringValue;
- (id)XQueryStringValue;
- (id)XQueryCastAs:(long long)a0 forContext:(id)a1;
- (long long)XQueryTypeID;

@end
