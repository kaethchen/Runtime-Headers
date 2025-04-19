@class NSUUID, AUAudioUnit_XPC, NSExtension;

@interface AUAudioUnit_XH : AUAudioUnit_XPC {
    NSExtension *_extension;
    NSUUID *_requestIdentifier;
    id /* block */ _speechSynthesisOutputMetadataBlock;
}

@property (retain) AUAudioUnit_XPC *strongInstance;
@property (copy) id /* block */ completionBlock;

+ (BOOL)canLoadInProcess:(id)a0;
+ (void)instantiateWithExtension:(id)a0 componentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a1 instance:(struct OpaqueAudioComponentInstance { } *)a2 options:(unsigned int)a3 completionHandler:(id /* block */)a4;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_internalInitWithExtension:(id)a0 componentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a1 instance:(struct OpaqueAudioComponentInstance { } *)a2 completion:(id /* block */)a3;
- (void)_open:(id)a0 completion:(id /* block */)a1;
- (void)requestViewControllerWithCompletionHandler:(id /* block */)a0;
- (void)setSpeechSynthesisOutputMetadataBlock:(id /* block */)a0;
- (id /* block */)speechSynthesisOutputMetadataBlock;

@end
