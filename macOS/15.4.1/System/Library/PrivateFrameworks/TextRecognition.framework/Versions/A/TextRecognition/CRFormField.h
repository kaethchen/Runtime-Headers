@class NSString, CRNormalizedQuad;
@protocol CRFormFieldProviding;

@interface CRFormField : NSObject <CRFormFieldProviding>

@property (retain) id<CRFormFieldProviding> originalField;
@property (readonly) CRNormalizedQuad *boundingQuad;
@property (copy) CRNormalizedQuad *originalQuad;
@property unsigned long long fieldType;
@property unsigned long long fieldSource;
@property (copy) NSString *fieldValue;
@property unsigned long long maxCharacterCount;
@property (readonly) BOOL hasMoved;
@property unsigned long long textContentType;
@property double suggestedLineHeight;
@property BOOL hasBoundedWidth;
@property BOOL hasBoundedHeight;
@property BOOL autofillNewContextStart;
@property (readonly) unsigned long long layoutDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithQuad:(id)a0 type:(unsigned long long)a1 source:(unsigned long long)a2 value:(id)a3 contentType:(unsigned long long)a4 maxCharacterCount:(unsigned long long)a5;

@end
