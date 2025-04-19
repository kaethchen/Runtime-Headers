@class NSMutableArray;

@interface CNAutocompleteResultPartitioner : NSObject {
    NSMutableArray *_normalResults;
    NSMutableArray *_foundInMailResults;
    NSMutableArray *_foundOnServersResults;
}

+ (BOOL)sourceTypeIsFoundInMail:(unsigned long long)a0;
+ (BOOL)sourceTypeIsFoundOnServers:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addResult:(id)a0;
- (id)foundInMailResults;
- (id)foundOnServersResults;
- (id)normalResults;

@end
