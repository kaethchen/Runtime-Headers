@class CHRecognitionSessionIndexableContent;

@interface CHIndexableContentQuery : CHQuery {
    CHRecognitionSessionIndexableContent *_indexableContent;
}

@property (readonly) CHRecognitionSessionIndexableContent *indexableContent;

- (void).cxx_destruct;
- (id)debugName;
- (id)initWithRecognitionSession:(id)a0;
- (BOOL)needsForegroundRecognition;
- (void)q_updateQueryResult;

@end
