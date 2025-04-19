@class NSString, FINode;

@interface FINode_ICloudAppLibrary : FIDSNode <FIAppLibrary> {
    FINode *_documentsFolder;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _appIdentifier;
}

@property (readonly, weak, nonatomic) FINode *documentsFolder;
@property (readonly) NSString *appIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_uiParent;
- (void)dispatchEvent:(id)a0 forObserver:(id)a1;
- (id)dropTargetNode;
- (id)fileOpNode;
- (id)iteratorWithOptions:(unsigned int)a0;
- (id)nodeToMoveOrDelete;
- (id)nodesToObserve;
- (id)propertyAsArray:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (id)propertyAsDate:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (id)propertyAsNumber:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;
- (id)updateDocumentsFolder;

@end
