@class NSArray, NSString;

@interface TSMTIEMask : NSObject

@property (copy, nonatomic) NSArray *elements;
@property (copy, nonatomic) NSString *name;

+ (id)UDPHardwareMask;
+ (id)UDPSoftwareMask;
+ (id)gPTP1Hop;
+ (id)gPTP7Hop;
+ (id)gPTPMask1;
+ (id)gPTPMask2;
+ (id)gPTPMask3;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)mtieConformsToMask:(id)a0 withErrors:(id *)a1;
- (id)mtieMaskFromStart:(double)a0 toEnd:(double)a1 withStep:(double)a2;

@end
