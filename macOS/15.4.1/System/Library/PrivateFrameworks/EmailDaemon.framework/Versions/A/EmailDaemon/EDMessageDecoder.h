@class EDSelectedDecoder, MEAppExtensionsController, EFCancelationToken, NSMutableArray;

@interface EDMessageDecoder : NSObject <MEAppExtensionsObserver> {
    MEAppExtensionsController *_extensionsController;
    NSMutableArray *_remoteExtensions;
    EFCancelationToken *_extensionsObserverCancelable;
    EDSelectedDecoder *_selectedDecoder;
    BOOL _shouldFindSelectedDecoder;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) BOOL isUsingDefaultDecoder;

+ (id)log;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)selectedDecoder;
- (void)_clearSelectedDecoder;
- (void)_nts_cacheSelectedDecoderIfNecessary;
- (void)_nts_clearSelectedDecoder;
- (id)_nts_getSelectedDecoderWithError:(id *)a0;
- (void)_setShouldFindSelectedDecoder;
- (id)decodedMessageForMessageData:(id)a0 decodeContext:(id)a1;
- (void)extensionsMatched:(id)a0;
- (void)extensionsNoLongerMatching:(id)a0;
- (id)initWithExtensionsController:(id)a0;

@end
