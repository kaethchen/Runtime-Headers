@class TIWordSearchCandidateResultSet;

@interface TIKeyboardInputManagerStickerTask : NSObject

@property (retain, nonatomic) TIWordSearchCandidateResultSet *candidateResultSet;
@property (copy, nonatomic) id /* block */ stickerCompletionHandler;

- (void).cxx_destruct;

@end
