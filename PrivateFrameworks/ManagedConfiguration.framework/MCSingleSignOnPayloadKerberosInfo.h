/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray, NSString;

@interface MCSingleSignOnPayloadKerberosInfo : NSObject {
    NSArray *_URLPrefixMatches;
    NSString *_accountGUID;
    NSString *_accountTypeGUID;
    NSArray *_appIdentifierMatches;
    NSString *_principalName;
    NSString *_realm;
}

@property(retain) NSArray * URLPrefixMatches;
@property(retain) NSString * accountGUID;
@property(retain) NSString * accountTypeGUID;
@property(retain) NSArray * appIdentifierMatches;
@property(retain) NSString * principalName;
@property(retain) NSString * realm;

- (void).cxx_destruct;
- (id)URLPrefixMatches;
- (id)accountGUID;
- (id)accountTypeGUID;
- (id)appIdentifierMatches;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)principalName;
- (id)realm;
- (void)setAccountGUID:(id)arg1;
- (void)setAccountTypeGUID:(id)arg1;
- (void)setAppIdentifierMatches:(id)arg1;
- (void)setPrincipalName:(id)arg1;
- (void)setRealm:(id)arg1;
- (void)setURLPrefixMatches:(id)arg1;
- (id)stubDictionary;
- (BOOL)validateAppIdentifierMatch:(id)arg1 outError:(id*)arg2;
- (BOOL)validateURLPrefixMatch:(id)arg1 outNormalizedString:(id*)arg2 outError:(id*)arg3;

@end