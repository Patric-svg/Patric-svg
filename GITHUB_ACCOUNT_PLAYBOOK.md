# GitHub Account Playbook

This guide defines the operating standard for maintaining a professional, secure, and productive GitHub account.

## 1. Profile

- Use a clear real name, professional avatar, accurate location, and concise headline.
- Keep the profile README focused on capabilities, selected work, current focus, and contact links.
- Add a portfolio or personal website when available.
- Pin four to six finished projects that demonstrate different strengths.
- Review the profile every quarter and remove stale claims or broken links.

## 2. Repository lifecycle

For every repository, choose one state:

- **Active:** maintained, documented, and regularly improved.
- **Portfolio:** stable, public, polished, and easy to run.
- **Private work:** contains unfinished work, proprietary code, or sensitive integrations.
- **Archived:** no longer maintained but worth preserving.
- **Delete:** truly empty, duplicated, accidental, or unsafe to retain.

Avoid publishing personal machine backups, generated files, IDE state, database dumps, credentials, or unrelated folders.

## 3. Minimum repository standard

Every public project should have:

- A useful description and relevant topics
- A README with purpose, features, architecture, prerequisites, setup, run commands, testing, and limitations
- A `.gitignore` appropriate to the language
- An `.env.example` containing variable names only when configuration is required
- A license when reuse is intended
- A security policy for security-sensitive tools
- Clear screenshots or a live demo where useful
- Issues enabled for bugs and feature requests
- A small, readable commit history

## 4. Software-engineering workflow

1. Create an issue describing the problem or feature.
2. Define acceptance criteria before implementation.
3. Work in a branch for meaningful changes.
4. Add or update tests for behavior that matters.
5. Run formatting, linting, tests, and a production build where applicable.
6. Review the diff for secrets, unrelated files, and accidental generated output.
7. Use a pull request with a concise summary, test evidence, and screenshots when relevant.
8. Tag releases and maintain a changelog for stable applications.

## 5. Security hygiene

- Enable two-factor authentication and keep recovery codes offline.
- Use a password manager and unique credentials.
- Review authorized OAuth applications, SSH keys, personal access tokens, and collaborators regularly.
- Use the minimum token scope and short expiration periods.
- Never commit `.env`, private keys, tokens, cookies, database dumps, or personal backups.
- If a secret is committed, revoke or rotate it immediately; deleting the file is not enough because it may remain in history.
- Enable secret scanning, push protection, Dependabot, and code scanning where available.
- Restrict repository settings and branch administration.

## 6. Cybersecurity project standard

Security tooling must include scope, authorization requirements, safe defaults, logging expectations, legal/ethical boundaries, and a responsible disclosure process. Demonstrate defensive use and never publish live credentials, target lists, or exploit instructions for systems without permission.

## 7. Trading and quantitative project standard

Document data sources, time zones, fees, spread, slippage, leverage assumptions, position sizing, risk limits, and out-of-sample results. Separate research, backtesting, paper trading, and live execution. Do not describe hypothetical or backtested performance as guaranteed returns.

## 8. Monthly maintenance checklist

- Review profile links and pinned repositories.
- Check open issues, pull requests, and Dependabot alerts.
- Search repositories for secrets and generated files.
- Confirm every public repository has a useful README.
- Archive or privatize abandoned experiments.
- Review collaborators, tokens, deploy keys, and third-party integrations.
- Update dependencies and verify builds.
- Record significant projects and releases in the profile README.

## 9. Portfolio priorities

Prefer a small number of complete, explainable projects over many unfinished repositories. The strongest portfolio should show one polished full-stack application, one Android application, one quantitative research system, one defensive-security utility, and one small frontend project demonstrating fundamentals.
