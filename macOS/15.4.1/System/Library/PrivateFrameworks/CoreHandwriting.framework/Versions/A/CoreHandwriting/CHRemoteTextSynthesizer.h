@class NSString, CHSynthesisStyleInventoryStatus, NSXPCConnection;

@interface CHRemoteTextSynthesizer : NSObject <CHSynthesizingText> {
    BOOL _shouldSkipStyleInventoryLookup;
    BOOL _shouldSaveStyleSample;
    CHSynthesisStyleInventoryStatus *_cachedStyleInventoryStatus;
    NSXPCConnection *__connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)cachedStyleInventoryStatus;
- (id)initWithShouldSkipInventoryLookup:(BOOL)a0 shouldSaveStyleSample:(BOOL)a1;
- (BOOL)isInventoryContainingSampleWithStrokeIdentifiers:(id)a0;
- (BOOL)populateStyleInventoryWithTokenizedResult:(id)a0 drawing:(id)a1 strokeIdentifiers:(id)a2 error:(id *)a3;
- (id)refineDrawing:(id)a0 transcription:(id)a1 options:(id)a2 shouldCancel:(id /* block */)a3 error:(id *)a4;
- (id)replaceDrawing:(id)a0 originalTranscription:(id)a1 replacementTranscription:(id)a2 options:(id)a3 shouldCancel:(id /* block */)a4 error:(id *)a5;
- (BOOL)resetStyleInventory:(id *)a0;
- (id)styleInventoryStatusWithTimeout:(double)a0;
- (id)supportedCharacterIndexesForString:(id)a0 options:(id)a1;
- (id)synthesizeDrawingForString:(id)a0 options:(id)a1 shouldCancel:(id /* block */)a2 error:(id *)a3;
- (BOOL)updateStyleInventoryWithRemovedStrokeIdentifiers:(id)a0 error:(id *)a1;

@end
