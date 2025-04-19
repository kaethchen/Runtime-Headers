@class NSString, NSImage, IMKDocumentContent, _STKSticker;

@interface IMKCandidate : NSObject <IMKCandidate>

@property (readonly, nonatomic) BOOL canCacheSize;
@property (readonly, nonatomic) NSString *stringIdentifier;
@property (nonatomic) long long style;
@property (readonly, nonatomic) NSString *axValueString;
@property (readonly, nonatomic) NSString *axDescriptionString;
@property (readonly, nonatomic) NSString *axHelpString;
@property (copy, nonatomic) NSString *displayText;
@property (readonly, copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *annotation;
@property (copy, nonatomic) NSImage *icon;
@property (readonly, copy, nonatomic) IMKDocumentContent *documentContentToReplace;
@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) _STKSticker *sticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)candidateWithText:(id)a0;
+ (id)candidateWithText:(id)a0 annotation:(id)a1;
+ (id)candidateWithText:(id)a0 annotation:(id)a1 replacing:(id)a2;
+ (id)candidateWithText:(id)a0 annotation:(id)a1 replacing:(id)a2 type:(unsigned long long)a3;
+ (id)candidateWithText:(id)a0 annotation:(id)a1 type:(unsigned long long)a2;
+ (id)candidateWithText:(id)a0 displayText:(id)a1 annotation:(id)a2 replacing:(id)a3 type:(unsigned long long)a4;
+ (id)candidateWithText:(id)a0 type:(unsigned long long)a1;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithText:(id)a0;
- (BOOL)hasNote;
- (id)descriptionHTML;
- (BOOL)hasDefinition;
- (id)initWithText:(id)a0 annotation:(id)a1;
- (id)initWithText:(id)a0 annotation:(id)a1 replacing:(id)a2;
- (id)initWithText:(id)a0 annotation:(id)a1 replacing:(id)a2 type:(unsigned long long)a3;
- (id)initWithText:(id)a0 annotation:(id)a1 type:(unsigned long long)a2;
- (id)initWithText:(id)a0 displayText:(id)a1 annotation:(id)a2 replacing:(id)a3 type:(unsigned long long)a4;
- (id)initWithText:(id)a0 type:(unsigned long long)a1;

@end
