@class NSArray, NSString;

@interface AVBMTIEMask : NSObject

@property (copy, nonatomic) NSArray *elements;
@property (copy, nonatomic) NSString *name;

+ (id)gPTP1Hop;
+ (id)gPTP7Hop;
+ (id)gPTPMask1;
+ (id)gPTPMask2;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)mtieConformsToMask:(id)a0 withErrors:(id *)a1;
- (id)mtieMaskFromStart:(double)a0 toEnd:(double)a1 withStep:(double)a2;
- (BOOL)exportMaskToDirectoryURL:(id)a0 withFilename:(id)a1 fromStart:(double)a2 toEnd:(double)a3 withStep:(double)a4;
- (id)initWithName:(id)a0 andElements:(id)a1;

@end
