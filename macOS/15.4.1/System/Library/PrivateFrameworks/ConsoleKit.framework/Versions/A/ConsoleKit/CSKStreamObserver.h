@class NSString, NSArray, CSKEntity;

@interface CSKStreamObserver : NSObject

@property (nonatomic) BOOL invalidated;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long dataType;
@property (retain, nonatomic) NSArray *filters;
@property (retain, nonatomic) CSKEntity *anchorEntity;
@property (nonatomic) BOOL anchorEntityDidSelect;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)resetWorkingStateWithDataBatch:(id)a0;
- (void)filteringDidFinish;
- (void)filteringDidStart;
- (void)handleAdditionDataBatch:(id)a0;
- (void)handleRemovalDataBatch:(id)a0;
- (void)invalidateWorkingState;
- (void)updateFilterFractionCompleted:(double)a0;

@end
