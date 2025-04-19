@class NSArray, NSObject;
@protocol OS_dispatch_data;

@interface MTLAirEntry : NSObject

@property (readonly) NSObject<OS_dispatch_data> *data;
@property (readonly) NSObject<OS_dispatch_data> *airScript;
@property (readonly) NSObject<OS_dispatch_data> *bitcode;
@property (retain) NSArray *linkedBitcodes;

- (void)dealloc;
- (id)initWithData:(id)a0;
- (id)initWithData:(id)a0 bitcode:(id)a1 airScript:(id)a2;

@end
