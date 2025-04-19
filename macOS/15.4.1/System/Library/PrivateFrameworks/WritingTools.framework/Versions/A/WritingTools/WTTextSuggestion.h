@class NSUUID, NSString;

@interface WTTextSuggestion : NSObject <BSXPCCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } originalRange;
@property (readonly, nonatomic) NSString *replacement;
@property (readonly, nonatomic) NSString *suggestionCategory;
@property (readonly, nonatomic) NSString *suggestionShortDescription;
@property (readonly, nonatomic) NSString *suggestionDescription;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithOriginalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacement:(id)a1;
- (id)initWithOriginalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacement:(id)a1 suggestionCategory:(id)a2 suggestionDescription:(id)a3;
- (id)initWithOriginalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacement:(id)a1 suggestionCategory:(id)a2 suggestionShortDescription:(id)a3 suggestionDescription:(id)a4;
- (id)initWithOriginalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacement:(id)a1 suggestionDescription:(id)a2;

@end
