@class NSString, PPPBContactNameRecord;

@interface PPInternalContactNameRecord : PPContactNameRecord {
    PPPBContactNameRecord *_pbRecord;
    NSString *_localizedFullName;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)identifier;
- (unsigned char)changeType;
- (id)middleName;
- (id)nickname;
- (double)score;
- (unsigned char)source;
- (id)firstName;
- (id)jobTitle;
- (void)setScore:(double)a0;
- (id)sourceIdentifier;
- (id)lastName;
- (id)organizationName;
- (id)phoneticMiddleName;
- (id)phoneticFirstName;
- (id)phoneticLastName;
- (id)relatedNames;
- (id)cityNames;
- (id)initWithIdentifier:(id)a0 score:(double)a1 source:(unsigned char)a2 sourceIdentifier:(id)a3 changeType:(unsigned char)a4 firstName:(id)a5 phoneticFirstName:(id)a6 middleName:(id)a7 phoneticMiddleName:(id)a8 lastName:(id)a9 phoneticLastName:(id)a10 organizationName:(id)a11 jobTitle:(id)a12 nickname:(id)a13 relatedNames:(id)a14 streetNames:(id)a15 cityNames:(id)a16;
- (id)localizedFullName;
- (id)streetNames;
- (id)clientCopy;
- (id)initWithPBContactNameRecord:(id)a0;
- (id)pbRecord;

@end
