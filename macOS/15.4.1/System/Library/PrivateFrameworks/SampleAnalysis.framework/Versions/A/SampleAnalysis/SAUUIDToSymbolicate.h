@class NSMutableArray;

@interface SAUUIDToSymbolicate : NSObject {
    BOOL _isInExclave;
    int _livePid;
    NSMutableArray *_binaries;
    unsigned long long _dataGatheringOptions;
}

- (id)debugDescription;
- (void).cxx_destruct;

@end
