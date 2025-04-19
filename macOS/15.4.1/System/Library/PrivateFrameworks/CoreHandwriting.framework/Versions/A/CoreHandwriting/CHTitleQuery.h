@class NSString, NSSet;

@interface CHTitleQuery : CHQuery

@property (readonly, copy, nonatomic) NSString *transcribedTitle;
@property (readonly, copy, nonatomic) NSSet *titleStrokeIdentifiers;

- (void).cxx_destruct;
- (id)debugName;
- (id)initWithRecognitionSession:(id)a0;
- (void)q_updateQueryResult;

@end
