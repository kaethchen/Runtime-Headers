@class NSString;
@protocol MTLDeserializer;

@interface DeserializationContext : NSObject <MTLDeserializationContext> {
    id<MTLDeserializer> _deserializer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)functionWithFunctionRef:(unsigned long long)a0;
- (id)initWithDeserializer:(id)a0;

@end
