@interface ABLinkPeopleCommand : ABLinkingCommand {
    BOOL ignoresGuardianRestrictions;
}

- (id)actionName;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (void)changePeople:(id)a0;
- (BOOL)ignoresGuardianRestrictions;
- (id)pickPreferredPersonFromPeople:(id)a0;
- (void)preferSomeoneForProperties:(id)a0;

@end
