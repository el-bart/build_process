pre_configure.dep:
	@echo "running pre-configure"
	@date > "$@"

post_install.dep:
	@echo "running post-install"
	@date > "$@"
