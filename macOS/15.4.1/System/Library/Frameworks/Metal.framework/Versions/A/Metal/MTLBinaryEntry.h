@class NSArray, NSObject;
@protocol OS_dispatch_data;

@interface MTLBinaryEntry : NSObject {
    NSObject<OS_dispatch_data> *_bitcode;
    NSObject<OS_dispatch_data> *_airScript;
}

@property (readonly) NSObject<OS_dispatch_data> *data;
@property (readonly) NSArray *importedSymbols;
@property (readonly) NSArray *importedLibraries;
@property (readonly) int reflectionFlags;
@property (readonly) unsigned long long binaryPosition;
@property unsigned long long index;
@property (retain) NSObject<OS_dispatch_data> *bitcode;
@property (retain) NSObject<OS_dispatch_data> *airScript;
@property (retain) NSArray *linkedBitcodes;
@property (readonly) NSObject<OS_dispatch_data> *reflectionBlock;

- (void)dealloc;
- (id)description;
- (id)initWithData:(id)a0;
- (void)addReflectionWithData:(id)a0 flag:(int)a1;
- (id)initWithData:(id)a0 binaryPosition:(unsigned long long)a1;
- (id)initWithData:(id)a0 importedSymbols:(id)a1 importedLibraries:(id)a2;
- (id)initWithData:(id)a0 reflectionBlock:(id)a1;
- (id)initWithData:(id)a0 reflectionBlock:(id)a1 binaryPosition:(unsigned long long)a2;
- (void)internalInitWithData:(id)a0 reflectionBlock:(id)a1 binaryPosition:(unsigned long long)a2;

@end
