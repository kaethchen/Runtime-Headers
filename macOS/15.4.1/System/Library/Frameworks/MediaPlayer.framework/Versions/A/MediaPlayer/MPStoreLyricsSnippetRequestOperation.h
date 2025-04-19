@class MPStoreLyricsSnippetURLComponents;

@interface MPStoreLyricsSnippetRequestOperation : MPAsyncOperation

@property (retain, nonatomic) MPStoreLyricsSnippetURLComponents *snippetURL;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)execute;
- (void)finishWithError:(id)a0;

@end
