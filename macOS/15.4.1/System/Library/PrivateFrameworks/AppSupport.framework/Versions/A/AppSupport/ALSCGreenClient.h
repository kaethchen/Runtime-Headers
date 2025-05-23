@interface ALSCGreenClient : NSObject <ALSCGreenClientProtocol> {
    BOOL _cachingAllowed;
}

@property (nonatomic) BOOL key1Value;
@property (nonatomic) BOOL key2Value;
@property (nonatomic) BOOL key3Value;
@property (readonly, nonatomic) BOOL valuesFinalized;

- (id)init;
- (BOOL)_attemptReadingValuesFromDiskAndUpdateFileState;
- (BOOL)_readGreenKeysFromDictionary:(id)a0;

@end
