@class NSString;

@interface XQueryString : NSString <XQueryAtomicType> {
    long long _type;
    NSString *_string;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringWithString:(id)a0;
+ (BOOL)isName:(id)a0;
+ (id)nameWithString:(id)a0;
+ (id)entityWithString:(id)a0;
+ (id)idRefWithString:(id)a0;
+ (id)idWithString:(id)a0;
+ (BOOL)isEntity:(id)a0;
+ (BOOL)isID:(id)a0;
+ (BOOL)isIDRef:(id)a0;
+ (BOOL)isLanguage:(id)a0;
+ (BOOL)isNCName:(id)a0;
+ (BOOL)isNMToken:(id)a0;
+ (BOOL)isNormalizedString:(id)a0;
+ (BOOL)isToken:(id)a0;
+ (id)languageWithString:(id)a0;
+ (id)ncNameWithString:(id)a0;
+ (id)nmTokenWithString:(id)a0;
+ (id)normalizedStringWithString:(id)a0;
+ (id)tokenWithString:(id)a0;

- (void)dealloc;
- (void)finalize;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)initWithString:(id)a0 type:(long long)a1;
- (id)XQueryStringValue;
- (id)XQueryCastAs:(long long)a0 forContext:(id)a1;
- (long long)XQueryTypeID;

@end
