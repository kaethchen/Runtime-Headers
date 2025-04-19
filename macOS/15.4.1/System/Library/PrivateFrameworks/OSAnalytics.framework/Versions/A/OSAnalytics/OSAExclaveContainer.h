@class NSMutableDictionary, NSMutableArray;

@interface OSAExclaveContainer : NSObject

@property (readonly, nonatomic) NSMutableDictionary *addressSpaces;
@property (readonly, nonatomic) NSMutableDictionary *layouts;
@property (readonly, nonatomic) NSMutableDictionary *threads;
@property (readonly, nonatomic) NSMutableDictionary *threadIdToScId;
@property (retain, nonatomic) NSMutableArray *notes;
@property (nonatomic) BOOL isExclaveValid;

- (id)init;
- (void).cxx_destruct;
- (void)appendNotesTo:(id)a0;
- (id)getFramesForThread:(id)a0 usingCatalog:(id)a1;
- (struct kcdata_iter { struct kcdata_item *x0; void *x1; })parseKCdata:(struct kcdata_iter { struct kcdata_item *x0; void *x1; })a0;
- (void)setThreadId:(id)a0 withScId:(id)a1;

@end
