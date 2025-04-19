@class NSString, NSMutableDictionary;

@interface ICNFMCError : NSError <NSAlertDelegate> {
    NSMutableDictionary *_moreUserInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)errorWithDomain:(id)a0 code:(long long)a1 localizedDescription:(id)a2;
+ (id)errorWithException:(id)a0;
+ (id)messageTraceableStringForError:(id)a0;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 localizedDescription:(id)a2 title:(id)a3 helpTag:(id)a4 userInfo:(id)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)localizedDescription;
- (id)userInfo;
- (id)initWithError:(id)a0;
- (void)setUserInfoObject:(id)a0 forKey:(id)a1;
- (id)helpAnchor;
- (void)setLocalizedDescription:(id)a0;
- (void)setShortDescription:(id)a0;
- (BOOL)alertShowHelp:(id)a0;
- (id)ic_moreInfo;
- (id)ic_shortDescription;
- (void)setHelpTag:(id)a0;
- (void)setMoreInfo:(id)a0;
- (void)useGenericDescription:(id)a0;

@end
