@class NSString, NSArray, NSDictionary;
@protocol MTLDevice;

@interface MTLSimFunction : NSObject <MTLFunction> {
    unsigned int _functionRef;
}

@property (readonly) unsigned int functionRef;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long functionType;
@property (readonly) unsigned long long patchType;
@property (readonly) long long patchControlPointCount;
@property (readonly) NSArray *vertexAttributes;
@property (readonly) NSArray *stageInputAttributes;
@property (readonly) NSString *name;
@property (readonly) NSDictionary *functionConstantsDictionary;
@property (readonly) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1;
- (id)initWithDevice:(id)a0 functionType:(unsigned long long)a1 functionRef:(unsigned int)a2;

@end
