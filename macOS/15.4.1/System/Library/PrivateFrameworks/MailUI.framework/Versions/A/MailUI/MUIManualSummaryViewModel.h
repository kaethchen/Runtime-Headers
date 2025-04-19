@class NSError, NSAttributedString, EFFuture;

@interface MUIManualSummaryViewModel : NSObject

@property (nonatomic) long long state;
@property (copy, nonatomic) NSAttributedString *summary;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isInlineSummary;
@property (nonatomic) BOOL isExternalSummary;
@property (retain, nonatomic) EFFuture *summaryControllerFuture;
@property (nonatomic) unsigned long long summarizableMessageCount;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithState:(long long)a0 summary:(id)a1 error:(id)a2 summarizableMessageCount:(unsigned long long)a3 isInlineSummary:(BOOL)a4 isExternalSummary:(BOOL)a5 summaryControllerFuture:(id)a6;
- (void)resetToInitialState;
- (void)updateToCompleteStateWithSummary:(id)a0 isExternalSummary:(BOOL)a1;
- (void)updateToErrorState:(id)a0;
- (void)updateToLoadingState;

@end
