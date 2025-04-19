@class NSArray, SCRProcessIdentifier;

@interface _SCROutputBrailleComponentLineCache : NSObject {
    SCRProcessIdentifier *_applicationPSN;
    NSArray *_elementIDs;
}

- (void).cxx_destruct;
- (id)applicationPSN;
- (id)elementIDs;
- (id)initWithApplicationPSN:(id)a0 elementIDs:(id)a1;

@end
