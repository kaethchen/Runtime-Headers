@class NSString, TSWPStorage, TSKPKDrawing;
@protocol TSKPencilAnnotationStorage;

@interface TSWPPencilAnnotation : TSPObject <TSPCopying, TSKDocumentObject, TSWPTextSpanningObject, TSWPOverlappingField, TSKPencilAnnotation>

@property (retain, nonatomic) id<TSKPencilAnnotationStorage> pencilAnnotationStorage;
@property (weak, nonatomic) TSWPStorage *parentStorage;
@property (readonly, nonatomic) NSString *textAttributeUUIDString;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) TSKPKDrawing *drawing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (BOOL)isInDocument;
- (id)initWithContext:(id)a0 pencilAnnotationStorage:(id)a1;
- (void)i_setTextAttributeUUIDString:(id)a0;
- (BOOL)isEquivalentToObject:(id)a0;
- (void)resetTextAttributeUUIDString;

@end
