@class NSTimer;

@interface WKPrintingView : NSView {
    struct WeakObjCPtr<NSPrintOperation> { id m_weakReference; } _printOperation;
    struct RetainPtr<NSView> { void *m_ptr; } _wkView;
    struct RefPtr<WebKit::WebFrameProxy, WTF::RawPtrTraits<WebKit::WebFrameProxy>, WTF::DefaultRefDerefTraits<WebKit::WebFrameProxy>> { struct WebFrameProxy *m_ptr; } _webFrame;
    struct Vector<WebCore::IntRect, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct IntRect *m_buffer; unsigned int m_capacity; unsigned int m_size; } _printingPageRects;
    double _totalScaleFactorForPrinting;
    struct HashMap<WebCore::IntRect, WTF::RefPtr<WebCore::ShareableBitmap>, WTF::DefaultHash<WebCore::IntRect>, WTF::HashTraits<WebCore::IntRect>, WTF::HashTraits<WTF::RefPtr<WebCore::ShareableBitmap>>, WTF::HashTableTraits, WTF::ShouldValidateKey::Yes> { struct HashTable<WebCore::IntRect, WTF::KeyValuePair<WebCore::IntRect, WTF::RefPtr<WebCore::ShareableBitmap>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::IntRect, WTF::RefPtr<WebCore::ShareableBitmap>>>, WTF::DefaultHash<WebCore::IntRect>, WTF::HashMap<WebCore::IntRect, WTF::RefPtr<WebCore::ShareableBitmap>>::KeyValuePairTraits, WTF::HashTraits<WebCore::IntRect>, WTF::ShouldValidateKey::Yes> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } _pagePreviews;
    struct Vector<unsigned char, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { char *m_buffer; unsigned int m_capacity; unsigned int m_size; } _printedPagesData;
    struct RetainPtr<PDFDocument> { void *m_ptr; } _printedPagesPDFDocument;
    struct Vector<WTF::Vector<WTF::RetainPtr<PDFDestination>>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } _linkDestinationsPerPage;
    struct Markable<WTF::ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long>, WTF::ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long>::MarkableTraits> { struct ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long> { unsigned long long m_identifier; } m_value; } _expectedComputedPagesCallback;
    struct HashMap<WTF::ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long>, WebCore::IntRect, WTF::DefaultHash<WTF::ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long>>, WTF::HashTraits<WTF::ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long>>, WTF::HashTraits<WebCore::IntRect>, WTF::HashTableTraits, WTF::ShouldValidateKey::Yes> { struct HashTable<WTF::ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long>, WTF::KeyValuePair<WTF::ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long>, WebCore::IntRect>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long>, WebCore::IntRect>>, WTF::DefaultHash<WTF::ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long>>, WTF::HashMap<WTF::ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long>, WebCore::IntRect>::KeyValuePairTraits, WTF::HashTraits<WTF::ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long>>, WTF::ShouldValidateKey::Yes> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } _expectedPreviewCallbacks;
    struct Markable<WTF::ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long>, WTF::ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long>::MarkableTraits> { struct ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long> { unsigned long long m_identifier; } m_value; } _latestExpectedPreviewCallback;
    struct Markable<WTF::ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long>, WTF::ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long>::MarkableTraits> { struct ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long> { unsigned long long m_identifier; } m_value; } _expectedPrintCallback;
    BOOL _isPrintingFromSecondaryThread;
    struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } _printingCallbackMutex;
    struct Condition { struct Atomic<bool> { struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } value; } m_hasWaiters; } _printingCallbackCondition;
    NSTimer *_autodisplayResumeTimer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)knowsPageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)beginDocument;
- (void)drawPageBorderWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endDocument;
- (BOOL)isFlipped;
- (struct CGPoint { double x0; double x1; })locationOfPrintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPage:(long long)a0;
- (void)_adjustPrintingMarginsForHeaderAndFooter;
- (BOOL)_askPageToComputePageRects;
- (void)_delayedResumeAutodisplay;
- (void)_delayedResumeAutodisplayTimerFired;
- (void)_drawPDFDocument:(id)a0 page:(unsigned int)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)_drawPageBorderWithSizeOnMainThread:(struct CGSize { double x0; double x1; })a0;
- (void)_drawPreview:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct optional<WTF::ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long>> { union { char x0; struct ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long> { unsigned long long x0; } x1; } x0; BOOL x1; })_expectedPreviewCallbackForRect:(const struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } *)a0;
- (unsigned long long)_firstPrintedPageNumber;
- (BOOL)_hasPageRects;
- (BOOL)_isPrintingPreview;
- (unsigned long long)_lastPrintedPageNumber;
- (unsigned int)_pageForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_preparePDFDataForPrintingOnSecondaryThread;
- (void)_setAutodisplay:(BOOL)a0;
- (void)_suspendAutodisplay;
- (void)_updatePreview;
- (id)initWithFrameProxy:(void *)a0 view:(id)a1;

@end
